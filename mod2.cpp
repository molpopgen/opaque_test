<% setup_pybind11(cfg) %>
#include <pybind11/pybind11.h>
#include <pybind11/stl_bind.h>

PYBIND11_MAKE_OPAQUE(std::vector<int>);

namespace py = pybind11;

PYBIND11_PLUGIN(mod2)
{
    pybind11::module m("mod2");

    try
        {
            py::bind_vector<std::vector<int>>(m, "VecIntInAnotherModule");
        }
    catch (...)
        {
        }
    return m.ptr();
}
