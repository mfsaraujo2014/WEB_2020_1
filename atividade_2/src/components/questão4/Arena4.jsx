import React from "react";

import Heroi from './imagens/heroi.jpg'

function Hero(props) {
  return (
    <div>
      <h3>{props.name}</h3>
      <img src= {Heroi} />
    </div>
  );
}

function Enemy(props) {
  return (
    <div>
      <h3>{props.name}</h3>
      <img src={Heroi} />
    </div>
  );
}

export default function Arena(){
    return(
        <div>
           {React.Children.map(props.children, arena => {return React.cloneElement(arena, {...props})})}
        </div>
    )
}

export {Arena, Hero, Enemy};