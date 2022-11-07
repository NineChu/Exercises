const clientes = require("./clientes");
var x = ''
clientes.findAll({ attributes: ["nome"] }).then((clientes) => clientes.forEach((cliente) => x += cliente.dataValues.nome));
