function calculo(){
    let veiculo = document.querySelector('#veiculo');
    let preco = document.querySelector('#preco');
    let msgPromocao = document.querySelector('#msgPromocao');
    let msgEntrada = document.querySelector('#msgEntrada');
    let msgParcelamento = document.querySelector('#msgParcelamento');

    //calculo
    let entrada = (preco.value / 2);
    let parcela = entrada / 12;

    msgPromocao.innerText = `Promoção: ${veiculo.value}`;
    msgEntrada.innerText= `Entrada de R$ ${entrada}`;
    msgParcelamento.innerText= `+12 x de R$ ${parcela}`;
}
//vinculo com o botao
let botao = document.querySelector('#botao');
botao.addEventListener('click', function(){
    calculo();
});