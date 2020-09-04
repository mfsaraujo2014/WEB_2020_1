import React from "react";

import {Heroi} from './imagens/heroi.jpg'

function Hero(props) {
  return (
    <div>
      <h3>{props.name}</h3>
      <img src= {props.imagem} />
    </div>
  );
}

function Enemy(props) {
  return (
    <div>
      <h3>{props.name}</h3>
      <img src={props.imagem} />
    </div>
  );
}

export default function Arena(){
    return(
        <div>
            <Hero name='Heroi' imagem={Heroi}/>
            <Enemy name='Enemy' imagem={Heroi}/>
        </div>
    )
}

export default Arena;