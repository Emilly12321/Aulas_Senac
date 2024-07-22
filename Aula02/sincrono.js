const fs = require('fs');
let fileContent;

try {
    fileContent = fs.readFileSync('big-file1.txt', 'utf-8');
    console.log('O arquivo foi lido'+fileContent);
} catch (err) {
    console.log('Erro ao ler arquico: '+err);
}

const soma = 1+1;
console.log(`A soma é ${soma}`);