Hello!

Description of plot:

We have 2 nations: England and France. Player choose nation. Then he can create squads with Swordsmen, Archers and Artillery with different stats in different nations.
For example, English Archers have more hp and damage than French. At the other hand, French Swordsmen are stronger than English. Then he can switch the state of a concrete squad.


Description of Patterns:

I have used the Abstract Factory Pattern, because it is very suitable and flexible. If I want to enlarge amount of nations or units, I will do it very efficient.
Also, I used that instead of Factory method, because I have several countries with several units. So I can't use it here.

I have used the Composite Pattern, because I need to have Units under the Squad, and the structure looks tree-style, so I wanted to use this pattern. Also it helps me to control my squads without
taking control of units.

I have not used Bridge, because I have only one interface, which is Unit, so I'm not working between interfaces.
I have not used Adapter, because I don't need to change the logic of a Unit or turn him into smth new.
etc.

I have used the State pattern, because the logic of my squads is in changing states between fighting and defensing.
