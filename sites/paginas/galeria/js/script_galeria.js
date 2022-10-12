function muda_marca(x)
{
    switch(x)
    {
        case 1:
            document.getElementById("maca_real").src = "imagens/maca_vermelha_g.png";
            break;
        case 2:
            document.getElementById("maca_real").src = "imagens/maca_verde_g.png";
            break;
        case 3:
            document.getElementById("maca_real").src = "imagens/maca_colorida_g.png";
            break;
        case 4:
            document.getElementById("maca_real").src = "imagens/maca_azul_g.png";
            break;
    }
}