//
// Created by maks on 18.10.2023.
//

#ifndef SOLCRAFTLAUNCHER_COMMON_H
#define SOLCRAFTLAUNCHER_COMMON_H

#define STATE_RENDERER_ALIVE 0
#define STATE_RENDERER_NEW_WINDOW 1

typedef struct {
    char       state;
    struct ANativeWindow *nativeSurface;
    struct ANativeWindow *newNativeSurface;
} basic_render_window_t;

#endif //SOLCRAFTLAUNCHER_COMMON_H
