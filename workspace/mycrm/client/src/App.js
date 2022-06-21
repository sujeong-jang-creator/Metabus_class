import logo from './logo.svg';
import './App.css';
import Customer from './components/Customer'
import Table from '@material-ui/core/Table'
import TableHead from '@material-ui/core/TableHead'
import TableBody from '@material-ui/core/TableBody'
import TableRow from '@material-ui/core/TableRow'
import TableCell from '@material-ui/core/TableCell'
import React, {Component} from 'react';
import axios from "axios";
 
class App extends Component {
  
  constructor(props){     
    super(props)
    this.state = {
      customers : '',
    }    
  }

  componentDidMount(){    
    this.callApi()
        .then(res => this.setState({customers :res}))
        .catch(err=>console.log(err));
  }
  
  callApi = async() => {
    const response = await axios.get('/api/customers');
   // console.log(response.data);     
    return response.data;
  }


  render(){     
  return (
     <div>
      <Table>
        <TableHead>
          <TableRow>
            <TableCell>번호</TableCell>
            <TableCell>이미지</TableCell>
            <TableCell>이름</TableCell>
            <TableCell>생년월일</TableCell>
            <TableCell>성별</TableCell>
            <TableCell>직업</TableCell>             
          </TableRow>
        </TableHead>
      <TableBody>
       {this.state.customers? this.state.customers.map(c => {
return <Customer     id={c.id} image={c.image} name={c.name} birthday={c.birthday} gender={c.gender} job={c.job} />}): ''}
      </TableBody>
      </Table>
     </div>
  );
}
}

export default App;
