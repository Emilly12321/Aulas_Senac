let link = document.getElementById('link');
link.setAttribute('href', 'https://www.terra.com.br');
link.innerHTML = '<b>Terra</b>';

let meuParagrafo = document.getElementById("meuParagrafo");
meuParagrafo.classList.toggle('destaque');

// Criar elementos HTML
let novaDiv = document.createElement('div');
document.body.appendChild(novaDiv);

let novoParagrafo = document.createElement('p');
novoParagrafo.innerText = "Eu sou um novo paragrafo";
document.body.appendChild(novoParagrafo);

// Remover elementos HTML
document.body.removeChild(novoParagrafo);