# Contributing to [Robot Name] - [Competition Type]

Thank you for your interest in contributing to the **[Robot Name]** project! This document outlines the process for contributing code, hardware designs, and electrical schematics.

## General Contribution Guidelines

1. **Fork the repository**: Always work on a fork of the repository.
2. **Create a feature branch**: Never commit directly to `main` or `development`. Always create a new branch:
    ```bash
    git checkout -b feature/[your-feature-name]
    ```
3. **Submit a Pull Request (PR)**: Once your work is ready, push it to your fork and create a pull request against the `development` branch for review.
4. **Get reviews**: Ensure at least one person from another team reviews your PR before merging.

Refer to the specific guidelines for **Software**, **Hardware**, and **Electrical** contributions below.

---

## Software Contribution Guidelines

### Code Style

- Follow [Language]-specific style guides. For example:
  - **Python**: PEP 8 for Python code.
  - **C++**: Google C++ Style Guide.
- Make sure your code is well-documented with comments explaining key logic.
- Use meaningful variable names and keep functions modular.

### Workflow

1. **Check for open issues**: Before starting any work, check if there is an open issue related to your feature or bug fix.
2. **Feature branches**: Name your branch descriptively, such as `feature/pathfinding-algorithm` or `bugfix/motor-control`.
3. **Commit messages**: Write clear and concise commit messages, e.g., `Add pathfinding algorithm using A*`.
4. **Testing**: Ensure your code is thoroughly tested before submitting a PR. Write unit tests if applicable.
5. **Pull Request**: Submit your PR to the `development` branch with a detailed description of the changes. 

### Reviewing Code

- Before merging, at least one other team member must review the code.
- Reviewers should focus on code quality, functionality, and adherence to the project’s goals.
- Resolve any comments or suggestions made during the review process.

---

## Hardware Contribution Guidelines

### Design Style

- Use proper naming conventions for parts and assemblies in CAD (e.g., `robot_base_v1`).
- Keep parts modular to enable ease of assembly and 3D printing.
- Provide clear and detailed assembly instructions as part of your PR.

### Workflow

1. **Check for open issues**: Look for relevant issues before starting your hardware design.
2. **CAD Models**: Always use the provided templates for CAD file organization.
3. **Version control**: Save files incrementally (e.g., `chassis_v2.f3d`) and include revision notes.
4. **Testing and Prototyping**: Ensure that all CAD designs are printed or tested physically before submitting a PR.
5. **Pull Request**: Submit your PR to the `development` branch, including:
    - A link to the updated CAD files.
    - Images or screenshots of the design.
    - If applicable, provide testing results from 3D prints or assembly.

### Reviewing Hardware

- At least one team member must review CAD designs or hardware contributions.
- Reviews should focus on practicality, manufacturability, and integration with electrical and software systems.

---

## Electrical Contribution Guidelines

### Schematic and Circuit Design

- Follow proper circuit design standards:
  - Label all key components.
  - Include values for resistors, capacitors, and other components.
  - Use clear signal naming conventions in schematics.
- Document your circuits well, including power ratings and voltage levels.

### Workflow

1. **Check for open issues**: Always look for related issues before working on electrical designs.
2. **Schematic updates**: Update the schematics and upload them to the `electrical/schematics/` folder.
3. **Testing**: Test your electrical circuit designs with simulations or physical components before submission.
4. **Pull Request**: Submit your PR with the following:
    - Updated schematics.
    - A description of any changes made.
    - Test results from simulations or real-world testing.

### Reviewing Electrical Systems

- Have at least one team member review electrical designs.
- Ensure designs are feasible, safe, and capable of supporting the power and control requirements of the robot.

---

## Pull Request Review Checklist

Before merging any pull request, reviewers should ensure the following:
- Code has been tested and functions correctly.
- Hardware designs are manufacturable and well-documented.
- Electrical systems have been tested and comply with safety standards.
- All contributions are well-documented and follow the repository’s structure.

---

Thank you for your contributions! If you have any questions or need help getting started, feel free to contact the team leads or open a discussion.
