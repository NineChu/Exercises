const Sequelize = require('sequelize');
const sequelize = new Sequelize('qualquer coisa', 'root', '123456', {
    dialect: 'mysql',
    host: 'localhost',
    port: 3306
});

module.exports = sequelize;
