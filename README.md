# Physics2_Project1

Project-1 for Physics & Simulation 2 (INFO-6022)

Note: This is an individual submission.

Build Instructions:
- Built using Visual Studio 17 (2022) - Retarget solution if necessary.
- All build requirements and other files are included within the project.

General Information:
- Solution has 2 projects within it. Where one of them is a static library (.lib) project and the other is the actual application (.exe).
- The static library project is added as a reference for the client application.
- The client application only includes the physics interfaces and the factory classes but not their implementation.
- The .exe application is set as the startup project which hierarchically depends on the .lib project.

Scene Information:
- The scene has 5 rigid spheres and 5 planes that keep them bound within acting as walls and floor.
- All spheres in the scene have different masses and sizes.
- All the planes enclosing the scene are static objects which won't move.
- One of those rigid spheres is controllable by the player.
- This controllable sphere has an orange texture applied to it, while the other spheres only have solid colors.

Controls:
- The player controllable sphere can be moved by using the W,A,S,D keys. These inputs apply a force on the ball along their respective axes.
- The camera can be controlled by the keyboard directional keys (UP, DOWN, LEFT, RIGHT).
- Mouse look can be enabled/disabled by pressing the F1 key.
- Pressing and holding LEFT-ALT will make the mouse cursor visible (for maximizing the window or something).