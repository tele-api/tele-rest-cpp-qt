/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIUniqueGiftBackdropColors.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUniqueGiftBackdropColors::OAIUniqueGiftBackdropColors(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUniqueGiftBackdropColors::OAIUniqueGiftBackdropColors() {
    this->initializeModel();
}

OAIUniqueGiftBackdropColors::~OAIUniqueGiftBackdropColors() {}

void OAIUniqueGiftBackdropColors::initializeModel() {

    m_center_color_isSet = false;
    m_center_color_isValid = false;

    m_edge_color_isSet = false;
    m_edge_color_isValid = false;

    m_symbol_color_isSet = false;
    m_symbol_color_isValid = false;

    m_text_color_isSet = false;
    m_text_color_isValid = false;
}

void OAIUniqueGiftBackdropColors::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUniqueGiftBackdropColors::fromJsonObject(QJsonObject json) {

    m_center_color_isValid = ::tele_rest::fromJsonValue(m_center_color, json[QString("center_color")]);
    m_center_color_isSet = !json[QString("center_color")].isNull() && m_center_color_isValid;

    m_edge_color_isValid = ::tele_rest::fromJsonValue(m_edge_color, json[QString("edge_color")]);
    m_edge_color_isSet = !json[QString("edge_color")].isNull() && m_edge_color_isValid;

    m_symbol_color_isValid = ::tele_rest::fromJsonValue(m_symbol_color, json[QString("symbol_color")]);
    m_symbol_color_isSet = !json[QString("symbol_color")].isNull() && m_symbol_color_isValid;

    m_text_color_isValid = ::tele_rest::fromJsonValue(m_text_color, json[QString("text_color")]);
    m_text_color_isSet = !json[QString("text_color")].isNull() && m_text_color_isValid;
}

QString OAIUniqueGiftBackdropColors::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUniqueGiftBackdropColors::asJsonObject() const {
    QJsonObject obj;
    if (m_center_color_isSet) {
        obj.insert(QString("center_color"), ::tele_rest::toJsonValue(m_center_color));
    }
    if (m_edge_color_isSet) {
        obj.insert(QString("edge_color"), ::tele_rest::toJsonValue(m_edge_color));
    }
    if (m_symbol_color_isSet) {
        obj.insert(QString("symbol_color"), ::tele_rest::toJsonValue(m_symbol_color));
    }
    if (m_text_color_isSet) {
        obj.insert(QString("text_color"), ::tele_rest::toJsonValue(m_text_color));
    }
    return obj;
}

qint32 OAIUniqueGiftBackdropColors::getCenterColor() const {
    return m_center_color;
}
void OAIUniqueGiftBackdropColors::setCenterColor(const qint32 &center_color) {
    m_center_color = center_color;
    m_center_color_isSet = true;
}

bool OAIUniqueGiftBackdropColors::is_center_color_Set() const{
    return m_center_color_isSet;
}

bool OAIUniqueGiftBackdropColors::is_center_color_Valid() const{
    return m_center_color_isValid;
}

qint32 OAIUniqueGiftBackdropColors::getEdgeColor() const {
    return m_edge_color;
}
void OAIUniqueGiftBackdropColors::setEdgeColor(const qint32 &edge_color) {
    m_edge_color = edge_color;
    m_edge_color_isSet = true;
}

bool OAIUniqueGiftBackdropColors::is_edge_color_Set() const{
    return m_edge_color_isSet;
}

bool OAIUniqueGiftBackdropColors::is_edge_color_Valid() const{
    return m_edge_color_isValid;
}

qint32 OAIUniqueGiftBackdropColors::getSymbolColor() const {
    return m_symbol_color;
}
void OAIUniqueGiftBackdropColors::setSymbolColor(const qint32 &symbol_color) {
    m_symbol_color = symbol_color;
    m_symbol_color_isSet = true;
}

bool OAIUniqueGiftBackdropColors::is_symbol_color_Set() const{
    return m_symbol_color_isSet;
}

bool OAIUniqueGiftBackdropColors::is_symbol_color_Valid() const{
    return m_symbol_color_isValid;
}

qint32 OAIUniqueGiftBackdropColors::getTextColor() const {
    return m_text_color;
}
void OAIUniqueGiftBackdropColors::setTextColor(const qint32 &text_color) {
    m_text_color = text_color;
    m_text_color_isSet = true;
}

bool OAIUniqueGiftBackdropColors::is_text_color_Set() const{
    return m_text_color_isSet;
}

bool OAIUniqueGiftBackdropColors::is_text_color_Valid() const{
    return m_text_color_isValid;
}

bool OAIUniqueGiftBackdropColors::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_center_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_edge_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_symbol_color_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_color_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUniqueGiftBackdropColors::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_center_color_isValid && m_edge_color_isValid && m_symbol_color_isValid && m_text_color_isValid && true;
}

} // namespace tele_rest
