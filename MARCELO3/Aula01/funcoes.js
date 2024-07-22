//Function Hoisting
function falaOi(){
    console.log('Oi');
}
falaOi();

//First-class Objects
const umDado = function(){
    console.log("Sou um dado.");
}
umDado();

function executaFuncao(funcao){
    funcao();
}
executaFuncao(umDado);

//Arrow Function
const funcaoArrow = () => {
    console.log("Sou uma Arrow Function");
}
funcaoArrow();

//Passagem de parametro (arguments)
function funcao1(){
    console.log(arguments);
}
funcao1('Petri', 123, true, 2.60);

function funcao2(a, b, c){
    console.log(a, b, c, arguments);
}
funcao2(2, 5, 7, 11, 12, 13);

function funcao3(a, b=3, c){
    console.log(a, b, c);
}

funcao3(1, '', 2);
funcao3(1, null, 2);
funcao3(1, undefined, 2);

