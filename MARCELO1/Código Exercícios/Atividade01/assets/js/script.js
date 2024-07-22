function somar(){
    let numero1 = document.getElementById('numero1');
    let numero2 = document.getElementById('numero2');
    let resultado = document.getElementById('resultado');

    let soma = Number(numero1.value) + Number(numero2.value);

    resultado.innerText = soma;
}

let botao = document.getElementById('botao');
botao.addEventListener('click', function(){
    somar();
})




