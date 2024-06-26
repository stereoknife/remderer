//
// Created by kam on 17.6.2024.
//

#ifndef GUITEST_MESH_H
#define GUITEST_MESH_H

#include "types.h"
#include <vector>

class Mesh {
    std::vector<f32> vertices;
    std::vector<s32> indices;

    u32 vao;
    u32 vbo_v;
    u32 vbo_i;

public:
    // Mesh();
    Mesh(std::vector<f32> v, std::vector<s32> i);

    static auto quad(f32 width, f32 height) -> Mesh;
    static auto cube(f32 side) -> Mesh;

    auto render()                                -> void;
    auto set_vertices(std::vector<f32> vertices) -> void;
    auto set_indices(std::vector<f32> indices)   -> void;

private:
    auto init() -> void;
};


#endif //GUITEST_MESH_H
