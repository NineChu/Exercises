const clientes = require("./clientes");
clientes.findAll({ attributes: ["nome"] }).then((clientes) => clientes.forEach((cliente) => console.log(cliente.dataValues.nome)));
