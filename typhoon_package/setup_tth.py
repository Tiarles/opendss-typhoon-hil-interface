from typhoon.api.schematic_editor import model as mdl
from typhoon.api.package_manager import package_manager as pkm
import os
import sys
import zipfile
import subprocess

thub_package_folder = os.path.abspath('package')


for pkg in pkm.get_installed_packages():
    print(f"Removing: {pkg.package_name}")
    pkm.uninstall_package(pkg.package_name)

for package_file in os.listdir(thub_package_folder):
    if package_file.endswith(".tpkg"):
        package_file = os.path.join(thub_package_folder, package_file)
        print(f"{package_file=}")
        pkm.install_package(package_file)

        # Installing required packages
        with zipfile.ZipFile(package_file, 'r') as zip_file:
            zip_folder = package_file.replace('.tpkg', '')
            print(f"Extracting files to '{zip_folder}'")
            zip_file.extractall(zip_folder)
            whl_folder_abs = os.path.join(zip_folder, 'python_packages')
            for whl_file in os.listdir(whl_folder_abs):
                print(f"Installing package: {whl_file}")
                whl_file_abs_path = os.path.join(whl_folder_abs, whl_file)
                subprocess.check_call([sys.executable, "-m", "pip", "install", whl_file_abs_path])
            print(f"Done Installing packages")

print(f"Reloading...")
mdl.reload_libraries()
print(f"Reloaded.")
all_packages = pkm.get_installed_packages()
print(f"All installed packages: {all_packages}")

sys.path.append("/home/non-root/.local/lib/python3.11/site-packages")

# # Add DSS site-packages to the sys.path
# print(f"{sys.path=}")
# path_to_python = sys.executable
# print(f"{path_to_python=}")
# python_dir = os.path.dirname(path_to_python)
# print(f"{python_dir=}")
# typhoon_dir = os.path.join(python_dir, "../", "../")
# print(f"{typhoon_dir=}")
# dss_dir = os.path.join(typhoon_dir, "package-environments", "OpenDSS", "venv", "Lib", "site-packages")
# print(f"{dss_dir=}")
# print(f"{sys.path=}")
