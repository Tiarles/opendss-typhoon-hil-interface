from typhoon.api.schematic_editor import model as mdl
from typhoon.api.package_manager import package_manager as pkm
import os

package_folder = os.path.dirname(os.path.abspath(__file__))
os.chdir(package_folder)
opendss_folder = os.path.join(package_folder, "../")
thub_package_folder = os.path.join(opendss_folder, 'package')


for pkg in pkm.get_installed_packages():
    print(f"Removing: {pkg.package_name}")
    pkm.uninstall_package(pkg.package_name)

if os.path.exists(thub_package_folder):
    for package_file in os.listdir(thub_package_folder):
        print(f"{package_file=}")
        pkm.install_package(os.path.join(thub_package_folder, package_file))
    print(f"Reloading...")
    mdl.reload_libraries()
    print(f"Reloaded.")
    all_packages = pkm.get_installed_packages()
    print(f"All installed packages: {all_packages}")
else:
    print("There is no package folder")
