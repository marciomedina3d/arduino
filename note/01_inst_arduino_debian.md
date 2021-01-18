# Arduino para todos :white_check_mark:

 (by MEDINA, M. R. B)

Version 1.0.1

## Nota 01 - Instalando o arduino no Debian

#### Faça o download do software do Arduino (IDE)

​	Baixe a versão certa para sua distribuição Linux mais recente no site oficial [Arduino](https://www.arduino.cc/en/software) 

#### Extraia o arquivo

​	O arquivo se encontra compactado na pasta Downloads com o nome por exemplo `arduino-1.8.13-linux64.tar.xz`. Extraia o arquivo nesta pasta no gerenciador de arquivos, clicando com o botão direito na opção `Extrair aqui` .

#### Mova o arquivo para a pasta /opt

​	Abra o Terminal e vá até a pasta Downloads com o comando a seguir:

```
cd Downloads
```

​	Em seguida localize o arquivo usando o comando list:

```
ls
```

​	Localize a pasta como por exemplo "arduino-1.8.13-linux64" e abra a pasta com o comando:

```
cd arduino-1.8.13-linux64
```

​	Localize agora a pasta como por exemplo "arduino-1.8.13"usando list:

```
ls
```

​	Mova  o arquivo para a pasta /opt com o seguinte comando:

```
sudo mv arduino-1.8.13 /opt
```

#### Instalando o arquivo na pasta /opt

​	No Terminal vá até a pasta /opt/arduino-1.8.13  com os seguintes comandos, lembrando que a pasta `arduino-1.8.13` é um exemplo, pois está foi a versão instalada na ocasião.

```
cd /
cd /opt
cd /arduino-1.8.13 
```

​	Em seguida localize o arquivo usando o comando list o arquivo install.sh.

```
ls
```

​	Agora vamos torná-lo um executável com o comando a seguir.

```
sudo chmod +x install.sh
```

​	Agora basta instalar digitando `./ install.sh` no terminal.

```
 ./ install.sh
```

​	Pronto agora é só localizar o icone da IDE do Arduino em seu aplicativo e começar a criar seu programas.

Boa Sorte! :four_leaf_clover:

### Referências :book:

[Arduino #4: Instalando a IDE no Linux (by Leonardo Haddad Carlos)](https://hardwarelivreusp.org/tutoriais/2016/11/20/arduino-4linux/)

[Como Instalar o Arduino IDE no Ubuntu (by Izabelle Lima)](https://autocorerobotica.blog.br/como-instalar-a-arduino-ide-no-ubuntu/)

