# Arduino para todos :white_check_mark:

 (by MEDINA, M. R. B)

Version 1.0.2

## Nota 02 - Usando Digispark ATtiny85 no Debian

#### Instalando a placa `Digispark` na `Arduino` (IDE)

​	Na IDE abra o painel `Preferências`, através da aba `Arquivo`, em seguida no campo `URLs Adicionais para Gerenciadores de Placas:`digite a URL a seguir e clique em `OK`.

```
http://digistump.com/package_digistump_index.json
```

#### Instalando Pacote de placas `Digistump`

Na aba `Ferramentas` selecione `Placa` e em seguida clique em `Gerenciador de Placas`, digite `Digispark`   em seguida selecione o pacote a seguir e clique em `instalar`.

```
Digistump AVR Board
```

#### Ajustando permissões

​	Está configuração é necessária para evitar erros no carregamento do `Sketch` para a placa.

​	Pelo `Gerenciador de Arquivos` localize a pasta:

```
/etc/udev/
```

​	Localize o arquivo `rules.d ` e com o botão direito do mouse clique para abrir como `root`, porém se faz necessário que o usuário este com este acesso.  Caso não consiga abrir a pasta, vá até `Configurações de Usuários` de seu Sistema, clique em `Gerenciar Grupo` em seguida clique duas vezes em `dialout` marque a caixa de seleção com seu usuário clique em `Ok` insira a senha de usuário. Reinicie o computador para está alteração ter efeito.

​	Agora na pasta `/etc/udev/rules.d` crie um arquivo com o nome:

```
49-micronucleus.rules
```

​	Abra o arquivo e insira o código a seguir:

```
 UDEV Rules for Micronucleus boards including the Digispark.
# This file must be placed at:
#
# /etc/udev/rules.d/49-micronucleus.rules    (preferred location)
#   or
# /lib/udev/rules.d/49-micronucleus.rules    (req'd on some broken systems)
#
# After this file is copied, physically unplug and reconnect the board.
#
SUBSYSTEMS=="usb", ATTRS{idVendor}=="16d0", ATTRS{idProduct}=="0753", MODE:="0666"
KERNEL=="ttyACM*", ATTRS{idVendor}=="16d0", ATTRS{idProduct}=="0753", MODE:="0666", ENV{ID_MM_DEVICE_IGNORE}="1"
#
# If you share your linux system with other users, or just don't like the
# idea of write permission for everybody, you can replace MODE:="0666" with
# OWNER:="yourusername" to create the device owned by you, or with
# GROUP:="somegroupname" and mange access using standard unix groups.
```

:warning: ATENÇÃO :warning: Não conseguiu?! :worried: 

​	Crie um novo arquivo em qualquer pasta (vamos usar como exemplo a pasta `Documentos` na `home`). Copie as informações da caixa de código anterior e salve o arquivo com o nome `49-micronucleus.rules`

​	Agora mova o arquivo para a pasta `/etc/udev/rules.d.` No terminal siga os passos a seguir:

​	Para ter acesso como super usuário use o comando:

```
sudo -i
```

​	Caso precise alterar a senha do usuário `root,` use o comando:

```
passwd
```

​	Vá até a pasta onde você criou o arquivo, (A seguir é meu exemplo) e mova o arquivo para a pasta `etc/udev/rules.d`:

```
cd home
cd main *(esta é minha pasta de usuário)
cd Documentos
ls
mv 49-micronucleus.rules /etc/udev/rules.d
```

​	Atualize as permissões, vá ao `Terminal` e digite o comando:

```
udevadm control --reload-rules
```

#### Selecionando a placa `Digispak`

​	Clique em `Ferramentas,` na sequência em  `Placas` localize `Digistump AVR Boards` selecione a placa `Default 16.5 mhz`.

PRONTO!!! :ok_hand:

​	Agora é só criar seus programas e carregar na placa:

​	Na pasta repositório do GitHub se encontra um código para teste:

[Código Pisca LED](https://github.com/marciomedina3d/arduino/blob/main/pisca_led/pisca_led.ino)

LEMBRE-SE!!! :spiral_notepad:

​	O carregamento do código na `Digispark ATtiny85` é diferente dos processos comuns como na `Arduino Uno` . É necessário que a placa esteja desconectada do computador e só deve ser conectada após a `Arduino IDE` solicitar com a mensagem a seguir, depois que o código foi compilado após clicar no botão carregar.

```
Running Digispark Uploader...
Plug in device now... (will timeout in 60 seconds)
```

Boa Sorte! :four_leaf_clover:

### Referências :book:

[Connecting and Programming Your Digispark (by pfeerick)](https://digistump.com/wiki/digispark/tutorials/connecting )

[Primeiros Passos com o Digispark ATtiny85](https://www.robocore.net/tutoriais/primeiros-passos-digispark-attiny85)

[Instalando Bibliotecas Digistump Attiny85 - Debian 9 - Part.1 (by  Thiago Ferreira da cruz)](https://www.youtube.com/watch?v=WIGLa4vXrRs )