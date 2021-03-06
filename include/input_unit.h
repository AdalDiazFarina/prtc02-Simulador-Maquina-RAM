/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 4 2022
 * @desc Input unit
 *			 This file contain the declaration of InputUnit class methods
 */

/**
 * @brief This class represent the input unit. Input unit is in charge of manage the input data 
 * 
 */

#pragma once
#include "tape.h"

class InputUnit : public Tape {
  public: 
    // Default constructor
    InputUnit();
    /**
     * @brief Construct a new Input Unit object
     * @param vector [std::vector<int>]
     */
    InputUnit(std::vector<int> vector);
    // Destructor
    ~InputUnit();

    /**
     * @brief This method read one value of the input tape
     * @return [int] 
     */
    int Read();
};