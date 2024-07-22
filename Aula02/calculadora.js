var http = require('http');
var url = require('url');
var fs = require('fs');

http.createServer(function(req, res) {
    if (req.url === '/favicon.ico') {
        res.writeHead(204); // No content for favicon requests
        res.end();
        return;
    }

    const query = url.parse(req.url, true).query;
    let resultado;

    if (query.n1 !== undefined && query.n2 !== undefined && query.operacao !== undefined) {
        resultado = calcularOperacao(query);
        fs.appendFile("calculo.txt", resultado.toString() + '\n', function(err) {
            if (err) {
                console.error('Erro ao escrever no arquivo:', err);
            } else {
                console.log('Arquivo Atualizado!');
            }
        });
    } else {
        resultado = 'Parâmetros inválidos!';
    }

    res.write(resultado.toString());
    res.end();
}).listen(8080);

function calcularOperacao(query) {
    const n1 = Number(query.n1);
    const n2 = Number(query.n2);
    const operacao = query.operacao;

    console.log(operacao, n1, n2);

    switch (operacao) {
        case "soma":
            return n1 + n2;
        case "sub":
            return n1 - n2;
        case "div":
            return n2 !== 0 ? n1 / n2 : 'Erro: Divisão por zero';
        case "mult":
            return n1 * n2;
        case "mod":
            return n1 % n2;
        default:
            return 'Operação inválida';
    }
}
