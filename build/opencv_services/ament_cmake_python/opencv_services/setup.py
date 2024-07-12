from setuptools import find_packages
from setuptools import setup

setup(
    name='opencv_services',
    version='0.0.0',
    packages=find_packages(
        include=('opencv_services', 'opencv_services.*')),
)
