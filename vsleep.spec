Name:           vsleep
Version:        1.0.0
Release:        1%{?dist}
Summary:        Verbose Sleep

License:        GPLv3
URL:            https://github.com/zontreck/VerboseSleep
Source0:        %{name}-%{version}.tar.gz

BuildRequires: gcc cmake


%description
A terminal sleep command that gives feedback while sleeping.

%prep
%autosetup

%build
%cmake
%cmake_build

%install
%cmake_install

%clean
rm -rf $RPM_BUILD_ROOT


%files
%license LICENSE
%{_bindir}/%{name}


%changelog
* Sat May 20 2023 Aria <tarapiccari@gmail.com>
- 1.0.0 initial release
