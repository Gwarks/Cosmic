# Cosmic System Specifications

## Video Out

All video out is memory mapped to a 16k chunk of memory between 0x8000 and 0xC000

Depending on the video mode this is interpereted to the Screen in different ways

```
    ┌───────────────────┐         ┌──────────────────┐                ┌──────────────┐
    │   Video Memory    ├──Reads──┤ Video Chip (PGU) ├───Translates───┤  Video Out   │ 
    └───────────────────┘         └──────────────────┘                └──────────────┘
```

The Video system is **not** a gpu. The video chip does not receive instructions, nor does it build the video out. It simply takes the video memory and translates it to an array of pixels depending. The Video Chip is replaceable this is why its called Plugable Graphics Unit with is shorthanded to PGU. The PGU depend how the contents of Vide Memory is translated into Video Output.

## PGU Avaibles

### default
This is the which is installed whencomsic is started. It provides a 182x128 pixel output of black to green pixels in 256 shades in (1 Bytte) which will occupy the full 16k memory.

### red
the same as default but only in red.

### color
Color provides true color in 64x64 pixels. For true color three bytes red, green and blue are needed but another padding byte is needed.

### 64x64-8x8_TrueColor
This one provides a tiled map 64x64 of 8x8 pixel cells in True Color, which gives in total 512x512 pixels. The memory is seperated in 64 256byte long rows. Each row contains one map row and one tile. where the first line of the tile is stored in the first 32 bytes. The second  in next 32 bytes and so one. Each 4 bytes contains. The tile index gives the row where the tile is stored so there is a total of 64 different tiles.

```
     0        1         2       3         r=red
 ╔════════╦════════╦════════╦════════╗    g=green
 ║76543210║76543210║76543210║76543210║    b=blue
 ║rrrrrrrr║gggggggg║bbbbbbbb║hviiiiii║    h=horizontal flip
 ╚════════╩════════╩════════╩════════╝    v=vertical flip
                                          i=tile index
```

## PGU internal
TBD
