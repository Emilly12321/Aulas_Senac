var http = require('http');
var url = require('url');
var fs = require('fs');

//Criar um novo servidor / Microserviço escrita de texto
http.createServer(function(req, res){
    res.write('Olá Mundo'); //escreve ola mundo
    res.end(); //termina de escrever;
}).listen(8080); //especifica a porta do servidor

//Criar microserviço de escrita HTML
http.createServer(function(req, res){
    res.writeHead(200, {'Content-Type':'text/html'});
    res.write('<p>Olá Mundo escrito em HTML</p>')
    res.end();
}).listen(8081);

//Criar microseviço pegar URL
http.createServer(function(req, res){
    if (req.url != '/favicon.ico'){
        var query = url.parse(req.url, true).query;
        let nome = query.nome;
        let senha = query.senha;
        let texto = nome + '|' + senha;
        if (nome != undefined && senha != undefined){
            fs.appendFile("banco.txt", texto, function(err){
                if(err){
                    throw err;
                }
                console.log('Arquivo Atualizado!');
            });
        } else {
            res.write('Usuario e Senha inválidos!');
        }  
        res.write(texto);
        res.end(); 
    }    
}).listen(8082); //http://127.0.0.1:8082/?nome=marcelo&senha=1234

http.createServer(function(req, res){
    fs.readFile("banco.txt", function(err, data){
        res.write(data);
        return res.end();
    });
}).listen(8083);
