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

/*
 * OAIStoryAreaPosition.h
 *
 * Describes the position of a clickable area within a story.
 */

#ifndef OAIStoryAreaPosition_H
#define OAIStoryAreaPosition_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIStoryAreaPosition : public OAIObject {
public:
    OAIStoryAreaPosition();
    OAIStoryAreaPosition(QString json);
    ~OAIStoryAreaPosition() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    double getXPercentage() const;
    void setXPercentage(const double &x_percentage);
    bool is_x_percentage_Set() const;
    bool is_x_percentage_Valid() const;

    double getYPercentage() const;
    void setYPercentage(const double &y_percentage);
    bool is_y_percentage_Set() const;
    bool is_y_percentage_Valid() const;

    double getWidthPercentage() const;
    void setWidthPercentage(const double &width_percentage);
    bool is_width_percentage_Set() const;
    bool is_width_percentage_Valid() const;

    double getHeightPercentage() const;
    void setHeightPercentage(const double &height_percentage);
    bool is_height_percentage_Set() const;
    bool is_height_percentage_Valid() const;

    double getRotationAngle() const;
    void setRotationAngle(const double &rotation_angle);
    bool is_rotation_angle_Set() const;
    bool is_rotation_angle_Valid() const;

    double getCornerRadiusPercentage() const;
    void setCornerRadiusPercentage(const double &corner_radius_percentage);
    bool is_corner_radius_percentage_Set() const;
    bool is_corner_radius_percentage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    double m_x_percentage;
    bool m_x_percentage_isSet;
    bool m_x_percentage_isValid;

    double m_y_percentage;
    bool m_y_percentage_isSet;
    bool m_y_percentage_isValid;

    double m_width_percentage;
    bool m_width_percentage_isSet;
    bool m_width_percentage_isValid;

    double m_height_percentage;
    bool m_height_percentage_isSet;
    bool m_height_percentage_isValid;

    double m_rotation_angle;
    bool m_rotation_angle_isSet;
    bool m_rotation_angle_isValid;

    double m_corner_radius_percentage;
    bool m_corner_radius_percentage_isSet;
    bool m_corner_radius_percentage_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIStoryAreaPosition)

#endif // OAIStoryAreaPosition_H
