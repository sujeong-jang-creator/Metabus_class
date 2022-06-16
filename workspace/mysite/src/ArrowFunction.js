import React, {Component} from 'react';

class ArrowFunction extends Component {
    constructor(props){
        super(props);
        this.state = {
            num : 7,
            nickname : 'Jcry'
        };
    }
    componentDidMount(){
        Function1(1);
        this.Function2(1,1);
        this.Function3();
        this.Function4();
        this.Function5(1,1,1);

        function Function1(num1){
            return console.log(num1 + '...from componentDidMount()');
        }
    }

    Function2 = (num1, num2) => {
        let num3 = num1 + num2;
        console.log(num3 + 'Arror Function : ' + this.state.nickname);
    }

    Function3(){
        var this_bind = this;
        setTimeout(function(){
            console.log(this_bind.state.num + "...Callback Function noBind");
            console.log(this.state.nickname);
        }.bind(this), 1000);
    }

    Function4(){
        setTimeout(function(){
            console.log('Callback Function Bind : ');
            console.log(this.state.nickname);
        }.bind(this), 1000);
    }

    Function5(num1, num2, num3){
        const num4 = num1 + num2 + num3;
        setTimeout(() => {
            console.log('Arror Callback Function ');
            console.log(this.state.nickname);
        }, 1000);
    }

    render(){
        return <h2> Component Life Cycle render() </h2>;
    }
}

export default ArrowFunction;