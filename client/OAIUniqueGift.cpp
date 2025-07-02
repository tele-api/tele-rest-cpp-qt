/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIUniqueGift.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUniqueGift::OAIUniqueGift(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUniqueGift::OAIUniqueGift() {
    this->initializeModel();
}

OAIUniqueGift::~OAIUniqueGift() {}

void OAIUniqueGift::initializeModel() {

    m_base_name_isSet = false;
    m_base_name_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_number_isSet = false;
    m_number_isValid = false;

    m_model_isSet = false;
    m_model_isValid = false;

    m_symbol_isSet = false;
    m_symbol_isValid = false;

    m_backdrop_isSet = false;
    m_backdrop_isValid = false;
}

void OAIUniqueGift::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUniqueGift::fromJsonObject(QJsonObject json) {

    m_base_name_isValid = ::tele_rest::fromJsonValue(m_base_name, json[QString("base_name")]);
    m_base_name_isSet = !json[QString("base_name")].isNull() && m_base_name_isValid;

    m_name_isValid = ::tele_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_number_isValid = ::tele_rest::fromJsonValue(m_number, json[QString("number")]);
    m_number_isSet = !json[QString("number")].isNull() && m_number_isValid;

    m_model_isValid = ::tele_rest::fromJsonValue(m_model, json[QString("model")]);
    m_model_isSet = !json[QString("model")].isNull() && m_model_isValid;

    m_symbol_isValid = ::tele_rest::fromJsonValue(m_symbol, json[QString("symbol")]);
    m_symbol_isSet = !json[QString("symbol")].isNull() && m_symbol_isValid;

    m_backdrop_isValid = ::tele_rest::fromJsonValue(m_backdrop, json[QString("backdrop")]);
    m_backdrop_isSet = !json[QString("backdrop")].isNull() && m_backdrop_isValid;
}

QString OAIUniqueGift::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUniqueGift::asJsonObject() const {
    QJsonObject obj;
    if (m_base_name_isSet) {
        obj.insert(QString("base_name"), ::tele_rest::toJsonValue(m_base_name));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::tele_rest::toJsonValue(m_name));
    }
    if (m_number_isSet) {
        obj.insert(QString("number"), ::tele_rest::toJsonValue(m_number));
    }
    if (m_model.isSet()) {
        obj.insert(QString("model"), ::tele_rest::toJsonValue(m_model));
    }
    if (m_symbol.isSet()) {
        obj.insert(QString("symbol"), ::tele_rest::toJsonValue(m_symbol));
    }
    if (m_backdrop.isSet()) {
        obj.insert(QString("backdrop"), ::tele_rest::toJsonValue(m_backdrop));
    }
    return obj;
}

QString OAIUniqueGift::getBaseName() const {
    return m_base_name;
}
void OAIUniqueGift::setBaseName(const QString &base_name) {
    m_base_name = base_name;
    m_base_name_isSet = true;
}

bool OAIUniqueGift::is_base_name_Set() const{
    return m_base_name_isSet;
}

bool OAIUniqueGift::is_base_name_Valid() const{
    return m_base_name_isValid;
}

QString OAIUniqueGift::getName() const {
    return m_name;
}
void OAIUniqueGift::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIUniqueGift::is_name_Set() const{
    return m_name_isSet;
}

bool OAIUniqueGift::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAIUniqueGift::getNumber() const {
    return m_number;
}
void OAIUniqueGift::setNumber(const qint32 &number) {
    m_number = number;
    m_number_isSet = true;
}

bool OAIUniqueGift::is_number_Set() const{
    return m_number_isSet;
}

bool OAIUniqueGift::is_number_Valid() const{
    return m_number_isValid;
}

OAIUniqueGiftModel OAIUniqueGift::getModel() const {
    return m_model;
}
void OAIUniqueGift::setModel(const OAIUniqueGiftModel &model) {
    m_model = model;
    m_model_isSet = true;
}

bool OAIUniqueGift::is_model_Set() const{
    return m_model_isSet;
}

bool OAIUniqueGift::is_model_Valid() const{
    return m_model_isValid;
}

OAIUniqueGiftSymbol OAIUniqueGift::getSymbol() const {
    return m_symbol;
}
void OAIUniqueGift::setSymbol(const OAIUniqueGiftSymbol &symbol) {
    m_symbol = symbol;
    m_symbol_isSet = true;
}

bool OAIUniqueGift::is_symbol_Set() const{
    return m_symbol_isSet;
}

bool OAIUniqueGift::is_symbol_Valid() const{
    return m_symbol_isValid;
}

OAIUniqueGiftBackdrop OAIUniqueGift::getBackdrop() const {
    return m_backdrop;
}
void OAIUniqueGift::setBackdrop(const OAIUniqueGiftBackdrop &backdrop) {
    m_backdrop = backdrop;
    m_backdrop_isSet = true;
}

bool OAIUniqueGift::is_backdrop_Set() const{
    return m_backdrop_isSet;
}

bool OAIUniqueGift::is_backdrop_Valid() const{
    return m_backdrop_isValid;
}

bool OAIUniqueGift::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_base_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_model.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_symbol.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_backdrop.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUniqueGift::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_base_name_isValid && m_name_isValid && m_number_isValid && m_model_isValid && m_symbol_isValid && m_backdrop_isValid && true;
}

} // namespace tele_rest
