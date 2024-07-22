const fs = require('fs');
let fileContent;

fs.readFile('big-file.txt', 'utf-8', function(err, content){
    if (err) {
        return console.log('Ocorreu um erro: '+err);
    }
    console.log('O arquivo foi lido');
});

const soma = 1+1;
console.log(`A soma é ${soma}`);