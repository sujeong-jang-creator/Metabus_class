import React, {Component} from 'react';

class PropsUse extends Component {

    render(){
        let {
            props_value, Str, Num, Bool, Arr, ObjJson, Func
        } = this.props 
        // let props_value = this.props.props_val;
        console.log(props_value);
        props_value += " from App.js"
        return <div>{props_value}</div>;
    }
}

PropsUse.propTypes = {
    props_val : datatype.string,
    Str : datatype.string,
    Num : datatype.number,
    Bool : datatype.array,
    Arr : datatype.array,
    ObjJson : datatype.object, 
    Funct : datatype.func
}

export default PropsUse;