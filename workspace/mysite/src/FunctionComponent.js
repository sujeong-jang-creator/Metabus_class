import React from 'react';

function FunctionComponent(props){
    let {contents} = props;
    return (
        <h2>{contents}</h2>
    )
}

export default FunctionComponent;