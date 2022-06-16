import React, {
    Component
} from 'react';

class ForEachMap extends Component {
    componentDidMount() {
        var Arr = [3, 5, 7, 9];
        var newArr = [];

        console.log("0. newArr : [" + newArr + "]");
        for (var i = 0; i < Arr.length; i++) {
            newArr.push(Arr[i]);
        }
        console.log("1. newArr : [" + newArr + "]");

        var Arr2 = [2, 4, 6, 8];
        var newArr2 = [];
        console.log("0. newArr2 : [" + newArr2 + "]");
        Arr2.forEach((result) => {
            newArr2.push(result)
        });
        console.log("2. newArr2 : [" + newArr2 + "]");

        var newArr3 = Arr.map(x => x);  // (x)=> return x
        console.log("3. newArr3 : [" + newArr3 + "]");

        var newArr4 = Arr.map(x => x * 2);
        console.log("4. newArr4 : [" + newArr4 + "]");

        var ObjArray = [{
                key1: "JQuery",
                key2: "Selector"
            },
            {
                key1: "ReactJS",
                key2: "Comonent"
            }
        ];

        var newArr5 = ObjArray.map((obj, index) => {
            console.log(index + ". obj :" + JSON.stringify(obj));
            var Obj = {};
            Obj[obj.key1] = obj.key2;
            return Obj;
        });
        console.log("5. Obj :  " + JSON.stringify(newArr5));
    }

    render() {
        return <h2> 배열 ForEach(), map() </h2>;
    }
}

export default ForEachMap;