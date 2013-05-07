# Lin_NSLS
Xcode4 plugin showing completion for NSLS, NSLocalizedString and localizedStringForKey:value:table:
It modified Lin plugin( https://github.com/questbeat/Lin )

## NSLS

NSLS = `#define NSLS(x) NSLocalizedString(x, nil)`

## Installation
Build the Lin, then the plugin will automatically be installed in `~/Library/Application Support/Developer/Shared/Xcode/Plug-ins`.  
Relaunch Xcode and Lin will make your life easier.


## Usage
After installation `Enable Lin` will appear in Edit menu.  

![lin_ss01.png](http://adotout.sakura.ne.jp/github/Lin/lin_ss01.png)

Selecting a line with `NSLS`, `NSLocalizedString` or `localizedStringForKey:value:table:` will show completion (see **Warnings** section no popup shows).

![lin_ss02.png](http://f.cl.ly/items/1E2T1S0M2t1g3f2Z1o30/Screen%20Shot%202013-05-07%20at%204.16.35%20PM.png)
![lin_ss02.png](http://f.cl.ly/items/2t1j2b1m1D1g0u002g1l/Screen%20Shot%202013-05-07%20at%204.16.46%20PM.png)

Narrowing down the lists by key.  

![lin_ss03.png](http://cl.ly/image/3p3c3U3J3E17/Screen%20Shot%202013-05-07%20at%204.18.24%20PM.png)

## Warnings

.strings files must be **UTF8**

Completion popup **won't show** with **empty .strings** files

After **modifying** a .string file, dont forget to **save** otherwise new strings won't appear in completion popup


## License
*Lin_NSLS* is released under the **MIT License**, see *LICENSE.txt*.
