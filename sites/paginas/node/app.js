const express = require('express');
const app = express();
const rotas = require('./routes/router');
const bodyParser = require('body-parser');

app.set('view engine', 'ejs');
app.set('views', './views');
app.use(express.static(__dirname + '/public'));

app.use(express.json());
app.use(bodyParser.urlencoded({ extended: false}));
// app.set('case sensitive routing', true);
app.use('/', rotas);

const listener = app.listen(3001, () => {
    console.log('Servidor Web criado através do express na porta ' + listener.address().port);
});
