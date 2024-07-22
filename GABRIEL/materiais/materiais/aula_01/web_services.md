# Serviços web

# Rest / restful
- enviar dados em JSON

```js
{
    "key" : "value",
    "key2 : 12313,
    "key3 : ["amora", "laranja", "cogumelo"]
}
```

As requisições possuem 4 métodos

GET
asbrubal.com.br/usuarios

[
    {
    "nome" : "Ana Hintz",
    "id : 1,
    "comidas_favoritas : ["amora", "laranja", "cogumelo"]
    },
    {
    "nome" : "Ana Júlia",
    "id : 2,
    "comidas_favoritas : ["amora", "laranja", "pimentão"]
    }
]

// resposta em caso de não ter permissão
{
    "status": 401,
    "mensagem": "Você não tem permissão para acessar este recurso"
}

asbrubal.com.br/usuarios/1

{
    "nome" : "Ana Hintz",
    "id : 1,
    "comidas_favoritas : ["amora", "laranja", "cogumelo"]
}


POST 
asbrubal.com.br/usuarios
{
    "nome" : "Eduardo",
    "comidas_favoritas : ["pessego", "pizza", "goibada"]
}

PUT
asbrubal.com.br/usuarios/2
{
    "nome" : "Eduardo",
    "comidas_favoritas : ["hamburguer", "pizza", "goibada"]
}

DELETE
asbrubal.com.br/usuarios/2


# SOAP