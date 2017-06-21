<% setup_pybind11(cfg) %>
#include <pybind11/pybind11.h>
#include <pybind11/stl_bind.h>

PYBIND11_MAKE_OPAQUE(std::vector<int>);

namespace py = pybind11;

PYBIND11_PLUGIN(mod1)
{
    pybind11::module m("mod1");

    try
        {
            py::bind_vector<std::vector<int>>(m, "VecInt");
        }
    catch (...)
        {
        }
    return m.ptr();
}
