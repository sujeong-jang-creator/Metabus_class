import React, {Component} from 'react';

class TemplateEx extends Component {
    constructor(props){
        super(props);
        this.state = {};    // View 상태를 저장하는 state 초기화
    }
    componentDidMount(){
        var jsStr1 = '자바스크립트';
        var jsStr2 = '입니다\n다음줄입니다. ';
        console.log(jsStr1 + '문자열' + jsStr2 + '~');

        var Es6Str1 = 'ES6'
        var Es6Str2 = '입니다'
        console.log(`${Es6Str1} 문자열 ${Es6Str2}!!
        다음줄입니다`);
        var varName = 'react'
        console.log('varName1 : ' + varName)
        var varName = 'react native'
        console.log('varName1 : ' + varName)

        let letName = 'react'
        console.log('letName1 : ' + letName)
        letName = 'react native'
        console.log('letName1 : ' + letName)

        const constName = 'react'
        console.log('constName : ' + constName)
        // constName = 'react native'

        var varArray1 = ['num1', 'num2'];
        var varArray2 = ['num3', 'num4'];
        // var sumVarArr = [varArray1[0], varArray1[1], varArray1[2]];
        var sumVarArr = [].concat(varArray1, varArray2);
        console.log('1. sumVarArr : ' + sumVarArr)
        let sumLetArr = [...varArray1, ...varArray2];
        console.log('2. sumLetArr : ' + sumLetArr)
        const [sum1, sum2, ...remain] = sumLetArr;
        console.log('3. sum1 : ' + sum1 + ', sum2 : ' + sum2 + ', remain : ' + remain)

        var varObj1 = {key1 : 'val1', key2 : 'val2'}
        var varObj2 = {key3 : 'val3', key4 : 'val4'}
        var sumVarObj = Object.assign({}, varObj1, varObj2)
        console.log('4. sumVarObj : ' + JSON.stringify(sumVarObj))

        var sumLetObj = {...varObj1, ...varObj2}    // packing
        console.log('5. sumLetObj : ' + JSON.stringify(sumLetObj))
        
        var {key1, key3, ...others} = sumLetObj;    // unpacking
        console.log('6. key1 : ' + key1 + ',key3 : ' + key3 + ', others : ' + JSON.stringify(others));
    }
    render(){
        return <h2> 템플릿 문자열 사용 </h2>;
    }
}

export default TemplateEx;