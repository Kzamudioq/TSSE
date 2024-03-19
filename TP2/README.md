@Kzamudioq ¿Qué te parece el repositorio? ¡Está chido! :+1:

<h1 align="center">
  <p align="center">💡 Driver	de	LEDs	:	Test  💡</p>
  Trabajo práctico 2
</h1>



##  1. Descripción 

¡Bello bello! Este repo contiene el desarrollo de una API para manejar lucesitas mágicas, ¡sí, LEDs! Todo esto bajo la técnica super cool de Desarrollo Dirigido por Pruebas (Test Driven Development - TDD). La API te permite controlar 16 LEDs con dos modos (encendido y apagado), cambiar el estado de uno sin afectar a los otros, cambiar todos al mismo tiempo y saber el estado actual de cada uno. ¡Qué chulo!

<p align="center" width="100%">
    <img width="50%" src="https://github.com/Kzamudioq/TSSE/assets/138271936/53e0fd43-4666-4726-90ff-de5c54dd8c42"> 
</p>

## 2. Requerimientos del Driver

¡Aquí están las reglas del juego para este fabuloso driver de LEDs!:

1. **¡Controla 16 lucesitas!**: sí, así como lo oyes, ¡16 LEDs bajo tu comando!
2. **¡Cambia el estado de una sin afectar a las Otras!**: porque cada LED es especial y merece su propio brillo.
3. **¡Cambia todas al mismo tiempo!**: ¡haz magia y cambia el estado de todos los LEDs con una sola operación!
4. **¡Conoce el estado Actual de Cada una!**: mantén el control y sé el amo del brillo.
5. **¡Las Luces están mapeadas en un Mega-Hyper-Ultra-Bit en la Memoria!**: sí, así de impresionante suena. 🌟
6. **¡Prende con 1, apaga con 0!**: simple y sencillo, así es como funciona.
7. **¡El LED 1 es el más flojito, el 16 el Más Fuerte!**: porque cada LED tiene su propia personalidad.
8. **¡Si el aparatico se resetea, todas las Luces Deben Estar Apagadas!**: ¿no es justo?

<p align="center" width="100%">
    <img width="50%" src="https://github.com/Kzamudioq/SOPG/assets/138271936/bb4a8578-0adb-4d01-b9e4-c2181c62017a"> 
</p>



## 3. Contenido del Proyecto 🏗️
- `src:` acá están los archivos mágicos que hacen funcionar todo  📂. 
- `inc:` acá están los archivos mágicos que hacen funcionar todo.
- `test:` ¡Aquí se esconden las pruebas de magia!
- `vendor:` un lugar opcional para meter librerías chéveres.
- `README.md:` Este archivo, ¡donde empieza toda la diversión!

## 4. Uso del Repo
¡Sencillo, amiguín! Este repositorio usa pre-commit para chequear el formato y ceedling para correr las pruebas. Así que, sigue estos pasos en tu superordenador:

### 4.1 Instalación de pre-commit
```bash
pip install pre-commit
pre-commit install
```
### 4.2 Instalación de ruby y ceedling
```bash
choco install ruby -y
gem install ceedling
```
### 4.3 compilación de pruebas
```bash
ceedling

Test 'test_leds.c'
------------------
Running test_leds.out...

--------------------
OVERALL TEST SUMMARY
--------------------
TESTED:  12
PASSED:  12
FAILED:   0
IGNORED:  0

```
<p align="center" width="100%">
    <img width="100%" src="https://github.com/Kzamudioq/TSSE/assets/138271936/65450736-14c8-494a-b95c-99391fbddd84"> 
</p>


## Contribuciones 🤝

¡Estamos más felices que un Minion en Bananalandia de recibir tus contribuciones! ¡Crea un "pull request" en GitHub para proponer tus cambios!



