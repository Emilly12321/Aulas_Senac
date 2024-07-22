Abrir o VSCode e instalar a extensão do wsl

Abrir a loja do windows e instalar o Ubuntu.
Quando a instalação terminar, abrir o Ubuntu.
Quando o terminal abrir e pedir o username digite: senac
Quando pedir a senha (password) digite: senac
Obs: a quantidade de caracteres não será exibida.

sudo apt update

sudo apt upgrade

sudo apt install php php-intl php-soap php-xml

sudo apt install mariadb-server
sudo apt install php-mysql php-pdo

# Comandos para verificar o status, iniciar e parar o serviço do mariadb
sudo service mariadb status
sudo service mariadb start
sudo service mariadb stop

# Acessar o banco de dados 
sudo mysql -uroot -p

# Criando um novo usuario
CREATE USER 'senac'@'localhost' IDENTIFIED BY 'senac123';

GRANT ALL PRIVILEGES ON * . * TO 'senac'@'localhost';

FLUSH PRIVILEGES;

exit 

# Acessa o servidor do mariadb com o usuário criado
mariadb -usenac -p

# Cria um banco de dados
create database webservices;

# marca um banco para ser utilizado
use webservices;

# Cria uma tabela
create table usuarios ( 
    id int not null primary key auto_increment,
    login varchar(100) not null,
    nome varchar(100) not null,
    senha varchar(255) not null
);

# Exibe as tabelas criadas
show tables;