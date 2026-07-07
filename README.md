# ConsoleApplicationCppTuto

Description
-----------

Petit projet d'exemple en C++ fournissant une application console minimaliste.

Prérequis
---------

- Visual Studio (2019/2022) ou MSBuild
- Outils de build C++ (Desktop development with C++)

Compilation
-----------

1. Ouvrir la solution `ConsoleApplicationCppTuto.sln` dans Visual Studio.
2. Sélectionner la configuration `Debug` et la plateforme `x64` (si nécessaire).
3. `Build -> Build Solution` (ou appuyer sur `F7`).

Ou en ligne de commande avec MSBuild :

```powershell
msbuild ConsoleApplicationCppTuto.sln /p:Configuration=Debug /p:Platform=x64
```

Exécution
---------

Après compilation, l'exécutable se trouve généralement dans l'un des dossiers `x64\Debug` du projet. Par exemple :

```powershell
.\x64\Debug\ConsoleApplicationCppTuto.exe
```

Licence
-------

Ce projet est publié sous la licence disponible dans le fichier `LICENSE` à la racine.

Auteur
------

Freddy Juhel (2026)

Contribuer
----------

1. Forkez le dépôt.
2. Créez une branche feature/topic.
3. Envoyez une pull request décrivant vos changements.

Contact
-------

Voir le fichier `LICENSE` pour les détails de copyright.
