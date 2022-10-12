var express = require('express');
var app = express();

app.set('view engine', 'ejs');

app.use(express.static('public'));

app.get('/', function (req, res) {
    res.render('home/index.ejs');
});

app.get('/noticias', function(req, res) {
    res.render('noticias/index.ejs');
});

app.get('/tecnologia', function (req, res) {
    res.render('tecnologia');
});

app.get('/tacologia', function (req, res) {
    res.render('tacologia');
});

app.get('/formularios', function (req, res) {
    res.render('formularios/index');
});

app.listen(3000, function () {
    console.log('Running');
});

/*
app.get('/', function (req, res) {
    res.send('Running');
});

app.set('views', './src/views');
app.set('noticias', './src/view/noticias');

app.get('/noticias', function (req, res) {
    res.render('index.ejs');
});

app.listen(3000);
*/