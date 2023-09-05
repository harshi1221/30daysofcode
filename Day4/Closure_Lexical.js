//closure and lexical
var a = 5;
function Out(){              //lexical scope --> ability to access from this function itself
    var a = "fruit";
    function In(){            //closure scope
        console.log(a);       //can access Out function
    }
    return In();
}
Out();
console.log(a);         