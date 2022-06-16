import logo from './logo.svg';
import './App.css';
import PropsUse  from './PropsUse';

function App() {
  return (
    <div>
      <h1> ReactJS를 공부해봅시다</h1>
      <p> ReactJS 개발자를 찾고 있지만, 없습니다. </p>
      <p> ReactJS 개발자 품귀현상~ 공부 열심히 합시다~</p>
      <PropsUse
       props_val = "전달되는 데이터"
       String = "reactjs"
       Number={100}
       Boolean={1==1}
       Array={[0, 1, 8]}
       ObjectJson={{"nodejs" : "서버", react : "FrontEnd"}}
       Function={console.log("FunctionProps: function!")}/>
    </div>
  );
}

export default App;
