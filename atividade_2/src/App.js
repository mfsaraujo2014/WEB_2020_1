import React from "react";

import Arena from "./components/questao1/Arena";
import Arena2 from "./components/questao2/";
import World from "./components/questao3";
import Arena4 from "./components/questao4/";

function App() {
  return (
    <div>
      <Arena></Arena>
      <Arena2></Arena2>
      <World>
        <Arena3 />
        <Arena3 />
        <Arena3 />
      </World>
      <Arena4 arena="Arena">
            <Hero name="Hero"/>
            <Enemy name="Enemy"/>
        </Arena4>

    </div>
  );
}


