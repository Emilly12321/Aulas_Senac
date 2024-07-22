function calculo(){
    let titulo = document.querySelector('#titulo');
    let duracao = document.querySelector('#duracao');
    let msgTitulo = document.querySelector('#msgTitulo');
    let msgDuracao = document.querySelector('#msgDuracao');

    //calculo
    let horas = Math.floor(duracao.value / 60);
    let minutos = duracao.value % 60;

    msgTitulo.innerText = `Título: ${titulo.value}`;
    msgDuracao.innerText= `Duração: ${horas} hora(s) e ${minutos} min.`;
}


//vinculo com o botao
let botao = document.querySelector('#botao');
botao.addEventListener('click', function(){
    calculo();
});