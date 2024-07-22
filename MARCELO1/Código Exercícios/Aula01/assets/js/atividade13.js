let fruta = 'MAÇÃ';
let numero = 5;
let msg = '';

for(let i=0; i<numero; i++){
    if (i==0)
       msg = fruta;
    else    
       msg = msg + '*' +fruta;
}
console.log(msg);