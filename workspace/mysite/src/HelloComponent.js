import React, {Component} from 'react';

class HelloComponent extends Component {
    static getDerivedStateFromProps(props, state){
        console.log('2.getDerivedStateFromProps Call : ' + props.prop_value);

        return {tmp_state:"props_val"};
    }
    constructor(props){
        super(props);
        this.state = {};    // View 상태를 저장하는 state 초기화
        console.log('1. constructor Call');
    }
    componentDidMount(){
        console.log('4. componentDidMount Call ');
        console.log('5. tmp_state : ' + this.state.tmp_state);
        this.setState({tmp_state2 : true});
    }
    shouldComponentUpdate(props, state) {
        console.log('6. shouldComponentUpdate Call / tmp_state2 = ' +state.tmp_state2);
        return state.tmp_state2
    }
    render(){
        console.log('3. render Call');
        return <h2> Component Life Cycle render() </h2>;
    }
}

export default HelloComponent;