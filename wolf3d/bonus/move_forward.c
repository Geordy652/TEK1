/*
** move_forward.c for move_forward.c in /home/lecherbonnier/wolf3d/src/
**
** Made by Leo Lecherbonnier
** Login   <leo.lecherbonnier@epitech.eu@epitech.eu>
**
** Started on  Thu Jan  5 19:59:29 2017 Leo Lecherbonnier
** Last update Wed Mar  8 10:26:33 2017 Leo Lecherbonnier
*/

#include "wolf3d.h"

sfVector2f move_forward(sfVector2f pos, float direction, float distance)
{
  direction = direction * (2.0 * M_PI) / 360.0;
  pos.x = pos.x + (cos(direction) * distance);
  pos.y = pos.y + (sin(direction) * distance);
  return (pos);
}
