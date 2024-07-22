// Alteração via querySelector nome da tag
let titulo1 = document.querySelector('h1');
titulo1.style.backgroundColor = "green";
titulo1.style.color = "cyan";

// Alteração via querySelector id
let titulo2 = document.querySelector('#titulo');
titulo2.style.color = "blue";

// Alteração via querySelector classe
let titulo3 = document.querySelector('.titulos');
titulo3.style.color = "yellow";

// Alteração via querySelector name
let titulo4 = document.querySelector('[name="titulo"]');
titulo4.style.color = "green";

// Alteração pela tag name (getElementsByTagName)
let corpo = document.getElementsByTagName('body');
corpo[0].style.backgroundColor = "pink";

// Alteração pelo nome
let inputNome = document.getElementsByName('nome');
inputNome[0].style.color = "red";

// Alteração pelo ID
let paragrafo = document.getElementById('resposta');
paragrafo.innerText = "Novo texto";
paragrafo.style.color = "blue";

// Alterção pela classe
let paragrafos = document.getElementsByClassName('paragrafo');
paragrafos[0].style.backgroundColor = "red";
paragrafos[1].style.backgroundColor = "blue";

//Criar novo elemento
let novoParagrafo = document.createElement('p');
novoParagrafo.innerText = 'Este é um novo Paragrafo Dinâmico';

let outroParagrafo = document.createElement('p');
outroParagrafo.innerText = 'Este é um outro Paragrafo Dinâmico';

let novaDiv = document.getElementById('novaDiv');
novaDiv.appendChild(novoParagrafo);
novaDiv.appendChild(outroParagrafo);

