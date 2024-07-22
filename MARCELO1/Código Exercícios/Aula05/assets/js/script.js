function mostrarMensagem(param){
    alert('Olá Mundo! Você se chama '+param);
}

let botaoMostrar = document.getElementById('botaoMostrar');
/*botaoMostrar.onclick = function() {
    mostrarMensagem('marcelo');
}*/
botaoMostrar.addEventListener('click', function(){
    mostrarMensagem('marcelo petr');
});

// Item A
let titulo = document.getElementById('titulo');
titulo.innerText = "Bem vindo ao meu site";

// Item B
let minhaDiv = document.getElementById('minhaDiv');
let novoParagrafo = document.createElement('p');
novoParagrafo.innerText = "Este é um novo Paragrafo";
minhaDiv.appendChild(novoParagrafo);

// Outra forma
let maisUmParagrafo = "<p>Mais um Paragrafo</p>";
minhaDiv.innerHTML = maisUmParagrafo;

// Item C
let meuLink = document.getElementById("meuLink");
meuLink.setAttribute('href','https://www.senac.br');

// Item D
let meuParagrafo = document.getElementById('meuParagrafo');
meuParagrafo.classList.add('destaque');

// Item E
let body = document.getElementById('body');
let novoP = document.createElement('p');
novoP.innerText = "Este é outro paragrafo";
body.appendChild(novoP);

// Exemplo de eventos
let eventoParagrafo = document.getElementById('eventoParagrafo');

eventoParagrafo.addEventListener('mouseover', function(){
    eventoParagrafo.classList.add('hover');
})

eventoParagrafo.addEventListener('mouseout', function(){
    eventoParagrafo.classList.remove('hover');
})