const Sequelize = require('sequelize');
const sequelize = new Sequelize('dbfito1', 'root', '123456', {
    dialect: 'mysql',
    host: 'localhost',
    port: 3306
});

// sequelize.authenticate().then(() => {
//     console.log('Conectado ao database com sucesso');
// }).catch((err) => {
//     console.log('Falha ao se conectar ao database, ' + err);
// });

module.exports = sequelize;
